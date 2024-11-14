vim.api.nvim_create_autocmd({ "BufRead", "BufNewFile" }, {
    pattern = "*.pory",
    callback = function()
        vim.opt.filetype = "poryscript"
    end
})
